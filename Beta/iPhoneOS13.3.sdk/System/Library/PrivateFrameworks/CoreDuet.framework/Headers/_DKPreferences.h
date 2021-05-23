/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _DKPreferences : NSObject

{
    NSString *_domain;
}

@property (nonatomic, readonly) NSString *domain;

+ (id)preferencesForDomain:(id)arg1;

- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (_Bool)boolForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (id)numberForKey:(id)arg1;
- (id)initWithDomain:(id)arg1;
- (id)objectForKey:(id)arg1 havingClass:(Class)arg2;

@end
