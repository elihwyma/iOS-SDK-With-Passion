//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSError, NSString;

@interface IMXMLReparserContext : NSObject
{
    NSString *_inContent;
    NSString *_outContent;
    NSDictionary *_attributesToMerge;
    NSError *_error;
    NSArray *_attributesToPreserve;
}

@property(readonly, copy, nonatomic) NSString *outContent; // @synthesize outContent=_outContent;
@property(readonly, retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, retain, nonatomic) NSDictionary *attributesToMerge; // @synthesize attributesToMerge=_attributesToMerge;
@property(readonly, retain, nonatomic) NSArray *attributesToPreserve; // @synthesize attributesToPreserve=_attributesToPreserve;
@property(readonly, retain) NSString *_inContent; // @synthesize _inContent;
- (void)_setOutContent:(id)arg1 error:(id)arg2;
- (void)dealloc;
- (id)initWithContent:(id)arg1 attributesToPreserve:(id)arg2 attributesToMerge:(id)arg3;

@end
