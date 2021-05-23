/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSString, REElement;

@interface REElementDataSourceUpdate : NSObject

{
    REElement *_element;
    unsigned long long _type;
    NSString *_section;
}

@property (nonatomic, readonly) REElement *element;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) NSString *section;

+ (id)reloadElement:(id)arg1 inSection:(id)arg2;
+ (id)insertElement:(id)arg1 inSection:(id)arg2;
+ (id)removeElement:(id)arg1 inSection:(id)arg2;
+ (id)refreshElement:(id)arg1 inSection:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithElement:(id)arg1 section:(id)arg2 updateType:(unsigned long long)arg3;

@end
