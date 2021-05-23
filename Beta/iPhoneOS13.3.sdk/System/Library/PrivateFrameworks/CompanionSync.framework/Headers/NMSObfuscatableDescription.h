/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@class NSMutableArray, NSString;

@interface NMSObfuscatableDescription : NSObject

{
    NSString *_prefixString;
    NSMutableArray *_items;
}

@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) NSString *prefixString;

- (id)init;
- (id)description;
- (id)CPSafeDescription;
- (id)_descriptionObfuscated:(_Bool)arg1;
- (void)addDescriptionFormat:(id)arg1 value:(id)arg2;
- (void)addObfuscatedDescriptionFormat:(id)arg1 value:(id)arg2;

@end
