/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface MKLocalSearchSection : NSObject

{
    _Bool _shouldInterleaveClientResults;
    _Bool _enforceServerResultsOrder;
    NSArray *_results;
    NSString *_title;
}

@property (nonatomic, readonly) NSArray *results;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) _Bool shouldInterleaveClientResults;
@property (nonatomic, readonly) _Bool enforceServerResultsOrder;

- (id)initWithResults:(id)arg1 title:(id)arg2 shouldInterleaveClientResults:(_Bool)arg3 enforceServerResultsOrder:(_Bool)arg4;

@end
