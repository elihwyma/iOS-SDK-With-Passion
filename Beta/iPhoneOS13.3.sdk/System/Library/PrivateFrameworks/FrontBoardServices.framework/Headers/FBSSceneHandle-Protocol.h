/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <FrontBoardServices/Swift-Protocol.h>

@protocol FBSSceneHandle <Swift>

- (unsigned short)identifier;
- (unsigned short)parameters;
- (unsigned short)hostProcess;
- (unsigned short)specification;
- (unsigned short)clientProcess;
- (unsigned short)callOutQueue;
- (unsigned short)counterpartAgent;
- (unsigned short)openSessionWithName:executionPolicy: /* Error: Ran out of types for this method. */;
- (unsigned short)sessionForIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)closeSession: /* Error: Ran out of types for this method. */;

@end
