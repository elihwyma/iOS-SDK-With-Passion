/*
 Image: /System/Library/PrivateFrameworks/PersonaKit.framework/PersonaKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface PRLikenessChange : NSObject

{
    NSString *_identifier;
    unsigned long long _type;
    NSString *_changedLikenessID;
    NSNumber *_changedLikenessVersion;
    NSArray *_dirtyLikenessProperties;
}

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *changedLikenessID;
@property (copy, nonatomic) NSNumber *changedLikenessVersion;
@property (copy, nonatomic) NSArray *dirtyLikenessProperties;

+ (id)descriptionForChangeType:(unsigned long long)arg1;
+ (id)changeForLikeness:(id)arg1 withType:(unsigned long long)arg2;
+ (unsigned long long)changeTypeFromDescription:(id)arg1;

- (id)description;

@end
