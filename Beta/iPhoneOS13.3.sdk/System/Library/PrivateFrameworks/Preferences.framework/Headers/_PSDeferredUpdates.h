/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, PSSpecifierUpdates;

@interface _PSDeferredUpdates : NSObject

{
    _Bool _invalidatedSpecifiers;
    NSMutableSet *_searchEntries;
    PSSpecifierUpdates *_specifierUpdates;
}

@property (retain, nonatomic) NSMutableSet *searchEntries;
@property (retain, nonatomic) PSSpecifierUpdates *specifierUpdates;
@property (nonatomic) _Bool invalidatedSpecifiers;

+ (id)deferredUpdatesWithEntries:(id)arg1 specifierUpdates:(id)arg2;
+ (id)deferredInvalidationUpdatesWithEntries:(id)arg1;

- (id)initWithSearchEntries:(id)arg1 specifierUpdates:(id)arg2 invalidatedSpecifiers:(_Bool)arg3;

@end
