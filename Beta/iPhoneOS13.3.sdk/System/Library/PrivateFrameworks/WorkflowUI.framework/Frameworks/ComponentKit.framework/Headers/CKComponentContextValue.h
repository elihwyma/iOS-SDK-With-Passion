/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol CKComponentContextDynamicLookup;

@interface CKComponentContextValue : NSObject

{
    NSMutableDictionary *_dictionary;
    id <CKComponentContextDynamicLookup> _dynamicLookup;
}

@end
