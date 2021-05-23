/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSError, NSString, NSURL;

@interface SXResourceResponse : NSObject

{
    NSString *_resourceIdentifier;
    NSURL *_fileURL;
    NSError *_error;
}

@property (retain, nonatomic) NSString *resourceIdentifier;
@property (retain, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) NSError *error;

@end
