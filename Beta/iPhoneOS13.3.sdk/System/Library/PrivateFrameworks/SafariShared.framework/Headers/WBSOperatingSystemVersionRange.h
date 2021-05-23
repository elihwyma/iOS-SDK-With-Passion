/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WBSOperatingSystemVersionRange : NSObject

{
    NSString *_family;
    CDStruct_f6aba300 _minimumVersion;
    CDStruct_f6aba300 _maximumVersion;
}

@property (nonatomic, readonly) NSString *family;
@property (nonatomic, readonly) CDStruct_f6aba300 minimumVersion;
@property (nonatomic, readonly) CDStruct_f6aba300 maximumVersion;

+ (id)defaultCloudBookmarksEligibleOperatingSystemRanges;

- (_Bool)includesOperatingSystemVersion:(CDStruct_f6aba300)arg1 inFamily:(id)arg2;
- (id)initWithFamily:(id)arg1 minimumVersion:(CDStruct_f6aba300)arg2 maximumVersion:(CDStruct_f6aba300)arg3;

@end
