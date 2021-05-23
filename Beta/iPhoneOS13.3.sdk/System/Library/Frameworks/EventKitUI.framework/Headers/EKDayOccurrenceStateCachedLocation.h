/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface EKDayOccurrenceStateCachedLocation : NSObject

{
    _Bool _originalOccurrenceLocationIsPrediction;
    _Bool _originalHasNewTimeProposed;
    NSString *_generatedLocationString;
    NSString *_originalOccurrenceLocation;
    NSString *_originalOccurrenceLocationWithoutPrediction;
}

@property (nonatomic, readonly) NSString *generatedLocationString;
@property (nonatomic, readonly) NSString *originalOccurrenceLocation;
@property (nonatomic, readonly) NSString *originalOccurrenceLocationWithoutPrediction;
@property (nonatomic, readonly) _Bool originalOccurrenceLocationIsPrediction;
@property (nonatomic, readonly) _Bool originalHasNewTimeProposed;

- (id)initWithGeneratedLocationString:(id)arg1 originalOccurrenceLocation:(id)arg2 originalOccurrenceLocationWithoutPrediction:(id)arg3 originalOccurrenceLocationIsPrediction:(_Bool)arg4 originalHasNewTimeProposed:(_Bool)arg5;

@end
