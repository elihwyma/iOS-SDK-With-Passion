/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface ENPreferencesStore : NSObject

{
    NSString *_pathname;
    NSMutableDictionary *_store;
}

@property (retain, nonatomic) NSString *pathname;
@property (retain, nonatomic) NSMutableDictionary *store;

+ (id)pathnameForStoreFilename:(id)arg1;
+ (id)preferenceStoreWithSecurityApplicationGroupIdentifier:(id)arg1;
+ (id)defaultPreferenceStore;

- (id)init;
- (void)load;
- (id)objectForKey:(id)arg1;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (id)initWithURL:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)removeAllItems;
- (void)save;
- (id)initWithStoreFilename:(id)arg1;
- (id)decodedObjectForKey:(id)arg1;

@end
