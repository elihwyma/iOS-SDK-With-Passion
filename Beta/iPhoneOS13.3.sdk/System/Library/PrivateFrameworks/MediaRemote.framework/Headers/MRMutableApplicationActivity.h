/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRApplicationActivity.h>

@class NSString;

@interface MRMutableApplicationActivity : MRApplicationActivity

@property (copy, nonatomic) NSString *primaryApplicationDisplayID;
@property (copy, nonatomic) NSString *secondaryApplicationDisplayID;
@property (nonatomic) int status;

+ (_Bool)supportsSecureCoding;

@end
