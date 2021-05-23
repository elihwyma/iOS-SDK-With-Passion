/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <SearchFoundation/SFURLImage.h>

@class NSURL, NSXPCListenerEndpoint;

@interface PARImage : SFURLImage

@property (retain, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (retain, nonatomic) NSURL *url;

+ (_Bool)supportsSecureCoding;
+ (id)imageWithData:(id)arg1;

@end
