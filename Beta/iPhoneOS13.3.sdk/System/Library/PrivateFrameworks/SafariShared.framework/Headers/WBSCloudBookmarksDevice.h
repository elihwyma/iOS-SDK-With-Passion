/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WBSCloudBookmarksDevice : NSObject

{
    NSString *_operatingSystemFamily;
    CDStruct_f6aba300 _operatingSystemVersion;
}

@property (nonatomic, readonly) NSString *operatingSystemFamily;
@property (nonatomic, readonly) CDStruct_f6aba300 operatingSystemVersion;

- (id)initWithDictionary:(id)arg1;
- (id)initWithOperatingSystemVersion:(CDStruct_f6aba300)arg1 family:(id)arg2;

@end
