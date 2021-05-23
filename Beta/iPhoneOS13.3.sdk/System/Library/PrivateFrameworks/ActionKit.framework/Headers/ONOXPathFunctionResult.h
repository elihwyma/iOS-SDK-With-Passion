/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface ONOXPathFunctionResult : NSObject

{
    struct _xmlXPathObject *_xmlXPath;
}

@property (nonatomic) struct _xmlXPathObject *xmlXPath;
@property (nonatomic, readonly) _Bool boolValue;
@property (nonatomic, readonly) double numericValue;
@property (copy, nonatomic, readonly) NSNumber *numberValue;
@property (copy, nonatomic, readonly) NSString *stringValue;

- (void)dealloc;

@end
