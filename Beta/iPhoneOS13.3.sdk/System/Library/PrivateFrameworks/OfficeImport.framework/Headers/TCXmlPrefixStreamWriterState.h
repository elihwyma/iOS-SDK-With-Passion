/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TCXmlPrefixStreamWriterState : NSObject

{
    NSString *_elementPrefix;
    NSString *_attributePrefix;
}

@property (copy, nonatomic) NSString *elementPrefix;
@property (copy, nonatomic) NSString *attributePrefix;

@end
