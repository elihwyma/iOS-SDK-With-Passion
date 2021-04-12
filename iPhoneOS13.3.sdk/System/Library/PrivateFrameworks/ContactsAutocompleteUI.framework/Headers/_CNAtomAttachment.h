//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSTextAttachment.h>

@class _CNAtomLayoutView;

@interface _CNAtomAttachment : NSTextAttachment
{
    _CNAtomLayoutView *_atomView;
    id _representedObject;
}

+ (id)attachmentWithAtomLayoutView:(id)arg1 representedObject:(id)arg2;
@property(readonly, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
@property(readonly, nonatomic) _CNAtomLayoutView *atomView; // @synthesize atomView=_atomView;
// - (void).cxx_destruct;
- (CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(NSUInteger)arg4;
- (id)imageForBounds:(CGRect)arg1 textContainer:(id)arg2 characterIndex:(NSUInteger)arg3;
- (id)initWithAtomLayoutView:(id)arg1 representedObject:(id)arg2;

@end

