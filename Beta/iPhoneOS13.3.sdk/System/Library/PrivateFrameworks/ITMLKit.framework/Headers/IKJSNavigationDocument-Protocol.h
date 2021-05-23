/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/Swift-Protocol.h>

@class NSArray, NSString;

@protocol IKJSNavigationDocument <Swift>

@property (retain, nonatomic, readonly) NSArray *documents;
@property (readonly) NSString *OPTION_RETAIN_CONTEXT;

- (unsigned short)clear;
- (unsigned short)dismissModal;
- (unsigned short)popDocument;
- (unsigned short)popToDocument: /* Error: Ran out of types for this method. */;
- (unsigned short)popToRootDocument;
- (unsigned short)removeDocument: /* Error: Ran out of types for this method. */;
- (unsigned short)pushDocument:: /* Error: Ran out of types for this method. */;
- (unsigned short)presentModal:: /* Error: Ran out of types for this method. */;
- (unsigned short)insertBeforeDocument::: /* Error: Ran out of types for this method. */;
- (unsigned short)replaceDocument::: /* Error: Ran out of types for this method. */;
- (unsigned short)setDocuments:: /* Error: Ran out of types for this method. */;

@end
