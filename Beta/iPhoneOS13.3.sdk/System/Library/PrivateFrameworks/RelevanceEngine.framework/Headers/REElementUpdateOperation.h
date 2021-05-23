/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class REElement, RESectionPath;

@interface REElementUpdateOperation : NSObject

{
    REElement *_element;
    RESectionPath *_path;
    RESectionPath *_movedToPath;
    unsigned long long _type;
}

@property (nonatomic, readonly) REElement *element;
@property (nonatomic, readonly) RESectionPath *path;
@property (nonatomic, readonly) RESectionPath *movedToPath;
@property (nonatomic, readonly) unsigned long long type;

+ (id)reloadElement:(id)arg1 atPath:(id)arg2;
+ (id)insertElement:(id)arg1 atPath:(id)arg2;
+ (id)removeElement:(id)arg1 atPath:(id)arg2;
+ (id)moveElement:(id)arg1 fromPath:(id)arg2 toPath:(id)arg3;
+ (id)refreshElement:(id)arg1 atPath:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithElement:(id)arg1 path:(id)arg2 newPath:(id)arg3 updateType:(unsigned long long)arg4;

@end
