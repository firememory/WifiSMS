/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */



@interface OAXTextBody : NSObject 
{
}

+ (void)readTextBodyFromXmlNode:(struct _xmlNode { void *x1; NSInteger x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 textBody:(id)arg2 drawingState:(id)arg3;
+ (void)readTextBodyProperties:(struct _xmlNode { void *x1; NSInteger x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg1 textBodyProperties:(id)arg2 drawingState:(id)arg3;
+ (NSInteger)readVerticalType:(id)arg1;
+ (NSInteger)readAnchorType:(id)arg1;
+ (NSInteger)readHorizontalOverflowType:(id)arg1;
+ (void)readVerticalType:(id)arg1 textBodyProperties:(id)arg2;
+ (void)readWrapType:(id)arg1 textBodyProperties:(id)arg2;
+ (void)readVerticalOverflowType:(id)arg1 textBodyProperties:(id)arg2;
+ (void)readHorizontalOverflowType:(id)arg1 textBodyProperties:(id)arg2;


@end