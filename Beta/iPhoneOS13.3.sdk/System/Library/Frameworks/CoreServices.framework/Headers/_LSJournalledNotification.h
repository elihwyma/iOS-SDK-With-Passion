/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface _LSJournalledNotification : NSObject

{
    int _notification;
    NSArray *_bundleIDs;
    NSDictionary *_options;
    _Bool _includePlugins;
}

@property (nonatomic, readonly) int notification;
@property (nonatomic, readonly) NSArray *bundleIDs;
@property (nonatomic, readonly) _Bool includePlugins;
@property (nonatomic, readonly) NSDictionary *options;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNotification:(int)arg1 bundleIDs:(id)arg2 plugins:(_Bool)arg3 options:(id)arg4;

@end
