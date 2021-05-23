/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSURL;

@interface WBSRadarNewProblemURLBuilder : NSObject

{
    NSString *_componentName;
    NSString *_componentVersion;
    NSString *_title;
    NSString *_descriptionText;
    NSArray *_attachmentURLs;
    long long _classification;
}

@property (copy, nonatomic) NSString *componentName;
@property (copy, nonatomic) NSString *componentVersion;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) NSArray *attachmentURLs;
@property (nonatomic) long long classification;
@property (nonatomic, readonly) NSURL *url;

@end
