/*
 Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface RPEventRegistration : NSObject

{
    NSString *_eventID;
    NSDictionary *_options;
    CDUnknownBlockType _handler;
}

@property (copy, nonatomic) NSString *eventID;
@property (copy, nonatomic) NSDictionary *options;
@property (copy, nonatomic) CDUnknownBlockType handler;

@end
