/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Foundation/NSObject.h>

@class NSBundle, NSLock, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CATLocalizationHelper : NSObject

{
    NSMutableDictionary *mStringByKeyByTableName;
    NSLock *mLock;
    NSBundle *_bundle;
}

@property (weak, nonatomic, readonly) NSBundle *bundle;

+ (id)helperForBundle:(id)arg1;

- (id)initWithBundle:(id)arg1;
- (id)stringsForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)stringByKeyForTableName:(id)arg1;

@end
