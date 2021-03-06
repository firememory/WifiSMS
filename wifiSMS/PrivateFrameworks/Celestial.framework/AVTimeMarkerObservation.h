/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSArray;



@interface AVTimeMarkerObservation : NSObject 
{
    id _observer;
    NSArray *_times;
    id _context;
    NSInteger _currentIndex;
}


- (id)initWithObserver:(id)arg1 times:(id)arg2 context:(id)arg3 currentIndex:(NSInteger)arg4;
- (void)dealloc;
- (BOOL)gotoTime:(double)arg1;
- (double)nextInterestingTime;
- (double)prevInterestingTime;
- (id)observer;
- (id)context;
- (NSInteger)currentIndex;

@end
