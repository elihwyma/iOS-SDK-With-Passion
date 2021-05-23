/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@class NSString;

@interface _LSApplicationState : NSObject

{
    NSString *_bundleIdentifier;
    unsigned long long _stateFlags;
    int _ratingRank;
    unsigned long long _installType;
}

@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly, getter=isInstalled) _Bool installed;
@property (nonatomic, readonly, getter=isPlaceholder) _Bool placeholder;
@property (nonatomic, readonly, getter=isValid) _Bool valid;
@property (nonatomic, readonly, getter=isRestricted) _Bool restricted;
@property (nonatomic, readonly, getter=isRemovedSystemApp) _Bool removedSystemApp;
@property (nonatomic, readonly, getter=isBlocked) _Bool blocked;
@property (nonatomic, readonly, getter=isAlwaysAvailable) _Bool alwaysAvailable;
@property (nonatomic, readonly, getter=isDowngraded) _Bool downgraded;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 stateFlags:(unsigned long long)arg2 ratingRank:(int)arg3 installType:(unsigned long long)arg4;
- (void)addStateFlag:(unsigned long long)arg1;

@end
