/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXDOMObjectProviding;

@interface SXImageRecordValueTransformer : NSObject

{
    id <SXDOMObjectProviding> _DOMObjectProvider;
}

@property (nonatomic, readonly) id <SXDOMObjectProviding> DOMObjectProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithDOMObjectProvider:(id)arg1;
- (id)transformValueForRecord:(id)arg1 descriptor:(id)arg2;

@end
