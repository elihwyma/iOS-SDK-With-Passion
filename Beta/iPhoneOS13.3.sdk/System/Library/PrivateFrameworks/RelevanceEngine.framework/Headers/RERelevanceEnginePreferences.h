/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSSet;

@protocol RERelevanceEnginePreferencesDelegate;

@interface RERelevanceEnginePreferences : NSObject

{
    id <RERelevanceEnginePreferencesDelegate> _delegate;
    NSSet *_disabledDataSourceIdentifiers;
    unsigned long long _mode;
}

@property (weak, nonatomic) id <RERelevanceEnginePreferencesDelegate> delegate;
@property (copy, nonatomic) NSSet *disabledDataSourceIdentifiers;
@property (nonatomic) unsigned long long mode;

+ (id)defaultPreferences;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
