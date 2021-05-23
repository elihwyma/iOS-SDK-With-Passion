/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface SKUILocalizedStringDictionary : NSObject

{
    NSArray *_bundles;
    NSMutableArray *_stringTables;
    NSString *_localeName;
}

@property (nonatomic, readonly) NSString *localeName;

- (id)localizedStringForKey:(id)arg1;
- (id)localizedStringForKey:(id)arg1 inTable:(id)arg2;
- (id)_stringTableForBundle:(id)arg1 tableName:(id)arg2;
- (id)initWithLocaleName:(id)arg1 bundles:(id)arg2;

@end
