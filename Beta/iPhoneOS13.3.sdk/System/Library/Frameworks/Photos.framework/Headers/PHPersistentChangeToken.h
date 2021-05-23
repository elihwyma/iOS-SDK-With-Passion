/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

#import <Photos/Swift-Protocol.h>

@class NSPersistentHistoryToken;

@interface PHPersistentChangeToken : NSObject <Swift>

{
    NSPersistentHistoryToken *_persistentHistoryToken;
    int _version;
}

@property (nonatomic, readonly) NSPersistentHistoryToken *persistentHistoryToken;
@property (nonatomic, readonly) int version;

+ (_Bool)supportsSecureCoding;
+ (int)currentVersion;
+ (id)currentTokenForContext:(id)arg1;
+ (id)tokenWithPersistentHistoryToken:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPersistentHistoryToken:(id)arg1 version:(int)arg2;
- (id)initWithPersistentHistoryToken:(id)arg1;
- (_Bool)isEqualToPersistentChangeToken:(id)arg1;

@end
