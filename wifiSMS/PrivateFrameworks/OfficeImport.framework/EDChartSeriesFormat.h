/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class OADColor, NSString;



@interface EDChartSeriesFormat : NSObject 
{
    OADColor *mFillColor;

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mHasFill;


  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mIsAuto;

    OADColor *mStrokeColor;

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mHasStroke;

    NSInteger mStrokeWidth;

  /* Error parsing encoded ivar type info: B */
    /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*mHasMarker;

    NSUInteger mMarkerType;
    NSInteger mMarkerSize;
    OADColor *mMarkerColor;
    NSInteger mSeriesNumber;
    NSString *mTitle;
    NSInteger mPieOffset;
}


- (void)dealloc;
- (id)title;
- (void)setTitle:(id)arg1;
- (NSInteger)number;
- (void)setNumber:(NSInteger)arg1;
- (id)fillColor;
- (void)setFillColor:(id)arg1;
- (void)setHasFill:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)hasFill;
     /* Encoded args for previous method: B8@0:4 */

- (void)setAuto:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)isAuto;
     /* Encoded args for previous method: B8@0:4 */

- (id)strokeColor;
- (void)setStrokeColor:(id)arg1;
- (void)setHasStroke:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)hasStroke;
     /* Encoded args for previous method: B8@0:4 */

- (float)strokeWidth;
- (void)setStrokeWidth:(NSInteger)arg1;
- (NSUInteger)markerType;
- (void)setMarkerType:(NSUInteger)arg1;
- (id)markerColor;
- (void)setMarkerColor:(id)arg1;
- (float)markerSize;
- (void)setMarkerSize:(NSInteger)arg1;
- (/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)hasMarker;
     /* Encoded args for previous method: B8@0:4 */

- (void)setHasMarker:(/* Warning: Unrecognized filer type: 'B' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v12@0:4B8 */

- (float)pieOffset;
- (void)setPieOffset:(NSUInteger)arg1;

@end
