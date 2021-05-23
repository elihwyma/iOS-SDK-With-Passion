/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKJSObject.h>

@class IKDOMNode, NSArray, NSString;

@interface IKDOMXPathResult : IKJSObject

{
    long long _type;
    NSArray *_nodes;
}

@property long long type;
@property (copy, nonatomic) NSArray *nodes;
@property (nonatomic, readonly) long long resultType;
@property (nonatomic, readonly) long long numberValue;
@property (weak, nonatomic, readonly) NSString *stringValue;
@property (nonatomic, readonly) _Bool booleanValue;
@property (weak, nonatomic, readonly) IKDOMNode *singleNodeValue;
@property (nonatomic, readonly) _Bool invalidIteratorState;
@property (nonatomic, readonly) long long snapshotLength;

- (id)iterateNext;
- (id)snapshotItem:(long long)arg1;
- (id)initWithAppContext:(id)arg1 type:(long long)arg2 nodes:(id)arg3;

@end
