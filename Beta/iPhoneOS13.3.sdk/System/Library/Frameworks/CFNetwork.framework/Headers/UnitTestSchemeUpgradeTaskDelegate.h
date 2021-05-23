/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSString;

@interface UnitTestSchemeUpgradeTaskDelegate : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 _schemeUpgraded:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithTestDisposition:(int)arg1;
- (_Bool)testPassed:(id)arg1;

@end
