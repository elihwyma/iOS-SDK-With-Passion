/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@class NSArray, NSMutableArray;

@interface TMLArray : NSObject

{
    NSMutableArray *_array;
}

@property (retain, nonatomic) NSArray *array;
@property (nonatomic, readonly) unsigned long long count;

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;

- (id)init;
- (id)initWithArray:(id)arg1;
- (void)removeAllObjects;
- (void)remove:(unsigned long long)arg1;
- (void)append:(id)arg1;
- (void)set:(unsigned long long)arg1 value:(id)arg2;
- (id)get:(unsigned long long)arg1;

@end
