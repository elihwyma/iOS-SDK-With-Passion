/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSSQLBindIntarray : NSObject

{
    unsigned int _index;
    id _value;
    NSString *_tableName;
}

@property (nonatomic) unsigned int index;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) NSString *tableName;

- (void)dealloc;
- (id)initWithValue:(id)arg1;

@end
