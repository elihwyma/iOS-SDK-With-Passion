/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@interface SUItemValidator : NSObject

{
    NSMutableArray *_collectionTests;
    NSMutableArray *_itemTests;
}

@property (nonatomic, readonly) NSArray *validationTests;

- (void)dealloc;
- (_Bool)validateItems:(id)arg1 offers:(id)arg2 error:(id *)arg3;
- (void)addCollectionValidationTests:(id)arg1;
- (void)addItemValidationTests:(id)arg1;
- (void)removeValidationTest:(id)arg1;
- (_Bool)validateItems:(id)arg1 error:(id *)arg2;

@end
