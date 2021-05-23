/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface _SBSCarPlayApplicationInfo : NSObject

{
    NSData *_iconImageData;
    double _iconImageScale;
    NSString *_localizedDisplayName;
}

@property (retain, nonatomic) NSData *iconImageData;
@property (nonatomic) double iconImageScale;
@property (retain, nonatomic) NSString *localizedDisplayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

@end
