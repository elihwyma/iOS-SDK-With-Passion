/*
 Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface CSSearchContext : NSObject

{
    unsigned long long _queryID;
    NSString *_userQuery;
    unsigned long long _maxItemsCount;
    NSString *_keyboardLanguage;
    NSArray *_preferredLanguages;
    NSString *_markedText;
    unsigned long long _markedTextStart;
}

@property (readonly) unsigned long long queryID;
@property (readonly) NSString *userQuery;
@property (readonly) unsigned long long maxItemsCount;
@property (readonly) NSString *keyboardLanguage;
@property (readonly) NSArray *preferredLanguages;
@property (readonly) NSString *markedText;
@property (readonly) unsigned long long markedTextStart;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithQueryID:(unsigned long long)arg1 userQuery:(id)arg2 maxItemsCount:(unsigned long long)arg3 keyboardLanguage:(id)arg4 preferredLanguages:(id)arg5 markedText:(id)arg6 markedTextStart:(unsigned long long)arg7;
- (id)initWithQueryID:(unsigned long long)arg1 userQuery:(id)arg2 maxItemsCount:(unsigned long long)arg3 keyboardLanguage:(id)arg4 preferredLanguages:(id)arg5;

@end
