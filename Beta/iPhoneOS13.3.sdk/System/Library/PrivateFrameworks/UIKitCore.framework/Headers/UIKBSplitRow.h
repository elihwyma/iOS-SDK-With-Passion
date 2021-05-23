/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray, UIKBTree;

__attribute__((visibility("hidden")))
@interface UIKBSplitRow : NSObject

{
    unsigned char _rowIndex;
    double _rowOffset;
    double _rowWidth;
    struct CGSize _defaultKeySize;
    NSMutableArray *_keys;
    NSMutableArray *_vacancies;
    NSDictionary *_hints;
    UIKBTree *_keylistLeft;
    UIKBTree *_geolistLeft;
    UIKBTree *_attrlistLeft;
    UIKBTree *_keylistRight;
    UIKBTree *_geolistRight;
    UIKBTree *_attrlistRight;
}

@property (nonatomic) unsigned char rowIndex;
@property double rowOffset;
@property double rowWidth;
@property struct CGSize defaultKeySize;
@property (readonly) NSMutableArray *keys;
@property (retain) NSDictionary *hints;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)keyAtIndex:(int)arg1;
- (void)addKey:(id)arg1;
- (id)listOfType:(int)arg1 left:(_Bool)arg2;

@end
