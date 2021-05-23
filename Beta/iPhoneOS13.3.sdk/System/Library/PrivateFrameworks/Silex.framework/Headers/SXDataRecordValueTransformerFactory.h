/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SXDOMObjectProviding;

@interface SXDataRecordValueTransformerFactory : NSObject

{
    id <SXDOMObjectProviding> _DOMObjectProvider;
}

@property (nonatomic, readonly) id <SXDOMObjectProviding> DOMObjectProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)recordValueTransformerForDataDescriptor:(id)arg1;
- (id)initWithDOMObjectProvider:(id)arg1;

@end
