/*
 Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

#import <Foundation/NSObject.h>

@class NSString, PRSDirectivesManager, SSCoreMLInterface;

@interface PRSModelContext : NSObject

{
    unsigned long long _type;
    SSCoreMLInterface *_model;
    PRSDirectivesManager *_directivesManager;
    NSString *_version;
}

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) SSCoreMLInterface *model;
@property (retain, nonatomic) PRSDirectivesManager *directivesManager;
@property (retain, nonatomic) NSString *version;

- (id)initWithModel:(id)arg1 directivesManager:(id)arg2 type:(unsigned long long)arg3;

@end
