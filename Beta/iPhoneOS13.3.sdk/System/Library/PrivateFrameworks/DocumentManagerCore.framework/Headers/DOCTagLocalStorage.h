/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
 */

#import <Foundation/NSObject.h>

@class NSOrderedSet, NSUserDefaults;

@interface DOCTagLocalStorage : NSObject

{
    NSUserDefaults *_userDefaults;
}

@property (nonatomic) long long tagSerialNumber;
@property (retain, nonatomic) NSUserDefaults *userDefaults;
@property (retain, nonatomic) NSOrderedSet *userTags;
@property (retain, nonatomic) NSOrderedSet *discoveredTags;

+ (id)sharedAppGroupStorage;

- (id)init;
- (id)_unarchivedTagsFromData:(id)arg1;

@end
