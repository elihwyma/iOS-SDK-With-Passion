/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXComponentTypeMatching;

@interface SXComponentSizerEngine : NSObject

{
    SXComponentTypeMatching *_factoryMatching;
}

@property (nonatomic, readonly) SXComponentTypeMatching *factoryMatching;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)addFactory:(id)arg1;
- (void)removeFactory:(id)arg1;
- (id)sizerForComponent:(id)arg1 componentLayout:(id)arg2 layoutOptions:(id)arg3 DOMObjectProvider:(id)arg4;

@end
