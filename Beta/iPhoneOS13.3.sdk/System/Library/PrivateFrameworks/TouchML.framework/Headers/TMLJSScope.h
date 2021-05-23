/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@class NSMutableSet;

@interface TMLJSScope : NSObject

{
    int _type;
    NSMutableSet *_vars;
}

@property (nonatomic) int type;
@property (retain, nonatomic) NSMutableSet *vars;

- (void)addVar:(id)arg1;

@end
