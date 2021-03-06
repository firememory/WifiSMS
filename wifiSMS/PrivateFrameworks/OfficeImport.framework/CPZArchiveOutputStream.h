/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, CPZOutputEntry, <CPZOffsetOutputStream>, <CPZOutputStream>, <CPZSeekableOutputStream>;



@interface CPZArchiveOutputStream : NSObject 
{
    <CPZOffsetOutputStream> *mOutputStream;
    <CPZSeekableOutputStream> *mSeekableOutputStream;
    NSMutableArray *mEntries;
    CPZOutputEntry *mCurrentEntry;
    <CPZOutputStream> *mEntryOutputStream;
    char *mBuffer;
}


- (id)initWithPath:(id)arg1;
- (void)dealloc;
- (void)beginEntryWithName:(id)arg1 isCompressed:(BOOL)arg2;
- (void)writeBuffer:(const char *)arg1 size:(unsigned long)arg2;
- (void)close;
- (void)finishEntry;
- (void)writeCentralFileHeaderUsingEntry:(id)arg1;
- (void)writeEndOfCentralDirectoryWithOffset:(long long)arg1;

@end
