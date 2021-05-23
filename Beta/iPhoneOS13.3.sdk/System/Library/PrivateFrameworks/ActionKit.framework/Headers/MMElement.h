/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface MMElement : NSObject

{
    NSMutableArray *_innerRanges;
    NSMutableArray *_children;
    int _type;
    long long _alignment;
    unsigned long long _level;
    NSString *_href;
    NSString *_title;
    NSString *_identifier;
    NSString *_stringValue;
    MMElement *_parent;
    NSString *_language;
    struct _NSRange _range;
}

@property (nonatomic) struct _NSRange range;
@property (nonatomic) int type;
@property (copy, nonatomic) NSArray *innerRanges;
@property (nonatomic) long long alignment;
@property (nonatomic) unsigned long long level;
@property (copy, nonatomic) NSString *href;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *stringValue;
@property (weak, nonatomic) MMElement *parent;
@property (copy, nonatomic) NSArray *children;
@property (copy, nonatomic) NSString *language;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)addChild:(id)arg1;
- (void)removeChild:(id)arg1;
- (id)removeLastChild;
- (void)addInnerRange:(struct _NSRange)arg1;
- (void)removeLastInnerRange;

@end
