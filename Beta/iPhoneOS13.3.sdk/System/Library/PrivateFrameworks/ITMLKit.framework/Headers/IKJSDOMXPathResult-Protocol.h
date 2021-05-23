/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/Swift-Protocol.h>

@class IKDOMNode, NSString;

@protocol IKJSDOMXPathResult <Swift>

@property (nonatomic, readonly) long long resultType;
@property (nonatomic, readonly) long long numberValue;
@property (weak, nonatomic, readonly) NSString *stringValue;
@property (nonatomic, readonly) _Bool booleanValue;
@property (weak, nonatomic, readonly) IKDOMNode *singleNodeValue;
@property (nonatomic, readonly) _Bool invalidIteratorState;
@property (nonatomic, readonly) long long snapshotLength;

- (unsigned short)iterateNext;
- (unsigned short)snapshotItem: /* Error: Ran out of types for this method. */;

@end
