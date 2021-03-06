/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADRotation3D;



@interface OADCamera : NSObject <NSCopying>
{
    OADRotation3D *mRotation;
    NSInteger mCameraType;
    float mFieldOfView;
    float mZoom;
}


- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)rotation;
- (void)setRotation:(id)arg1;
- (NSInteger)cameraType;
- (void)setCameraType:(NSInteger)arg1;
- (float)fieldOfView;
- (void)setFieldOfView:(float)arg1;
- (float)zoom;
- (void)setZoom:(float)arg1;

@end
