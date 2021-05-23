/*
 Image: /System/Library/PrivateFrameworks/CorePrediction.framework/CorePrediction
 */

#import <Foundation/NSObject.h>

@interface CPMLEvalutionResult : NSObject

{
    NSObject *object;
    unsigned long long count;
}

- (double)getDouble;
- (id)getString;
- (id)init:(id)arg1 withConfigurationList:(id)arg2;
- (id)getStringList;
- (int)getInt;
- (id)getList;
- (id)getListDict;

@end
