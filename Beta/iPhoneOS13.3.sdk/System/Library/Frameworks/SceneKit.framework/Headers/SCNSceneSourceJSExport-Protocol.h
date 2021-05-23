/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/Swift-Protocol.h>

@class NSData, NSURL;

@protocol SCNSceneSourceJSExport <Swift>

@property (readonly) NSURL *url;
@property (readonly) NSData *data;

+ (unsigned short)sceneSourceWithURL:options: /* Error: Ran out of types for this method. */;
+ (unsigned short)sceneSourceWithData:options: /* Error: Ran out of types for this method. */;

- (unsigned short)propertyForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)sceneWithOptions:error: /* Error: Ran out of types for this method. */;
- (unsigned short)entryWithIdentifier:withClass: /* Error: Ran out of types for this method. */;
- (unsigned short)identifiersOfEntriesWithClass: /* Error: Ran out of types for this method. */;
- (unsigned short)sceneWithOptions:statusHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)entriesPassingTest: /* Error: Ran out of types for this method. */;

@end
