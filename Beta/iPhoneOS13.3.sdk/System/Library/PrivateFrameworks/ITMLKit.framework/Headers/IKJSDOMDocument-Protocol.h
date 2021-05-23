/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/Swift-Protocol.h>

@class IKDOMElement, IKDOMImplementation, IKJSNavigationDocument, NSString;

@protocol IKJSDOMDocument <Swift>

@property (weak, nonatomic, readonly) IKDOMImplementation *implementation;
@property (retain, nonatomic, readonly) IKDOMElement *documentElement;
@property (retain, nonatomic, readonly) NSString *inputEncoding;
@property (retain, nonatomic, readonly) NSString *xmlEncoding;
@property (nonatomic) _Bool xmlStandalone;
@property (retain, nonatomic) NSString *xmlVersion;
@property (nonatomic) _Bool strictErrorChecking;
@property (retain, nonatomic) NSString *documentURI;
@property (weak, nonatomic, readonly) IKJSNavigationDocument *navigationDocument;

- (unsigned short)createElement: /* Error: Ran out of types for this method. */;
- (unsigned short)createDocumentFragment;
- (unsigned short)setNeedsUpdate;
- (unsigned short)getElementsByTagName: /* Error: Ran out of types for this method. */;
- (unsigned short)createTextNode: /* Error: Ran out of types for this method. */;
- (unsigned short)createComment: /* Error: Ran out of types for this method. */;
- (unsigned short)createCDATASection: /* Error: Ran out of types for this method. */;
- (unsigned short)adoptNode: /* Error: Ran out of types for this method. */;
- (unsigned short)getElementById: /* Error: Ran out of types for this method. */;

@end
