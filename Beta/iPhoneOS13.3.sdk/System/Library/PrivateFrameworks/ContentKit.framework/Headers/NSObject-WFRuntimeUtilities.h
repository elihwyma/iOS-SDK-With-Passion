/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

@class NSString, WFType;

@interface NSObject (WFRuntimeUtilities)

@property (nonatomic, readonly) WFType *wfType;
@property (copy, nonatomic, readonly) NSString *wfName;

+ (void)wf_enumerateClassMethodsWithPrefix:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;

@end
