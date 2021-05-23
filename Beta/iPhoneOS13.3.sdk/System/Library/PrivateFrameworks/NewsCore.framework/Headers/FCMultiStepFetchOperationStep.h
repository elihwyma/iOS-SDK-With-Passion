/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@interface FCMultiStepFetchOperationStep : NSObject

{
    _Bool _isCritical;
    SEL _fetchSelector;
}

@property (nonatomic) SEL fetchSelector;
@property (nonatomic) _Bool isCritical;

@end
