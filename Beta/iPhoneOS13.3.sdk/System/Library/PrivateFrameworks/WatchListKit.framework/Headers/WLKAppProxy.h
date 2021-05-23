/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface WLKAppProxy : NSObject

{
    _Bool _isEntitled;
    _Bool _isBetaApp;
    _Bool _isSystemApp;
    _Bool _supportsTVApp;
    NSString *_bundleIdentifier;
    NSString *_version;
    NSString *_subscriptionInfo;
    NSNumber *_itemID;
}

@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (copy, nonatomic, readonly) NSString *version;
@property (nonatomic, readonly) _Bool isEntitled;
@property (nonatomic, readonly) _Bool isBetaApp;
@property (nonatomic, readonly) _Bool isSystemApp;
@property (nonatomic, readonly) _Bool isTVApp;
@property (nonatomic, readonly) _Bool supportsTVApp;
@property (copy, nonatomic, readonly) NSString *subscriptionInfo;
@property (copy, nonatomic, readonly) NSNumber *itemID;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;

@end
