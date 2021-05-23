/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface JXHTTPFormEncodedBody : NSObject

{
    NSMutableDictionary *_dictionary;
}

@property (retain, nonatomic) NSMutableDictionary *dictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)withDictionary:(id)arg1;

- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)requestData;
- (id)httpInputStream;
- (id)httpContentType;
- (long long)httpContentLength;

@end
