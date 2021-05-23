/*
 Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

#import <NSObject.h>

@class CVAMattingRequest, NSString;

@interface CVABackgroundRequestImplBase : NSObject

{
    CVAMattingRequest *_mattingRequest;
}

@property (retain) CVAMattingRequest *mattingRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

@end
