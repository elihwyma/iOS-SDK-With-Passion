/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class PFTimeZoneLookup;

@interface PLLocalCreationDateCreator : NSObject

{
    PFTimeZoneLookup *_timeZoneLookup;
}

@property (nonatomic, readonly) PFTimeZoneLookup *timeZoneLookup;

+ (void)initialize;
+ (id)_gmtTranslationDictionary;

- (id)init;
- (id)generateInferredTimeZoneOffsetForAsset:(id)arg1;

@end
